/****************************************************************************
** 
** Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
** 
** This file is part of a Qt Solutions component.
**
** Commercial Usage  
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Solutions Commercial License Agreement provided
** with the Software or, alternatively, in accordance with the terms
** contained in a written agreement between you and Nokia.
** 
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
** 
** In addition, as a special exception, Nokia gives you certain
** additional rights. These rights are described in the Nokia Qt LGPL
** Exception version 1.1, included in the file LGPL_EXCEPTION.txt in this
** package.
** 
** GNU General Public License Usage 
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
** 
** Please note Third Party Software included with Qt Solutions may impose
** additional restrictions and it is the user's responsibility to ensure
** that they have met the licensing requirements of the GPL, LGPL, or Qt
** Solutions Commercial license and the relevant license of the Third
** Party Software they are using.
** 
** If you are unsure which license is appropriate for your use, please
** contact Nokia at qt-info@nokia.com.
** 
****************************************************************************/

#include "mainwindow.h"
#include "qtvariantproperty.h"
#include "qttreepropertybrowser.h"
#include <QtGui/QMatrix>
#include <QtGui/QMouseEvent>
#include <QtGui/QMenuBar>
#include <QtGui/QMenu>
#include <QtGui/QAction>
#include <QtGui/QDockWidget>

void CanvasView::contentsMousePressEvent(QMouseEvent* event)
{
    handleMouseClickEvent(event);
}

void CanvasView::contentsMouseDoubleClickEvent(QMouseEvent* event)
{
    handleMouseClickEvent(event);
}

void CanvasView::handleMouseClickEvent(QMouseEvent* event)
{
    QPoint p = inverseWorldMatrix().map(event->pos());
    QtCanvasItemList l = canvas()->collisions(p);
    moving = 0;
    if (!l.isEmpty())
        moving = l.first();
    moving_start = p;
    emit itemClicked(moving);
}

void CanvasView::contentsMouseMoveEvent(QMouseEvent* event)
{
    if (moving) {
	QPoint p = inverseWorldMatrix().map(event->pos());
	moving->moveBy(p.x() - moving_start.x(), p.y() - moving_start.y());
	moving_start = p;
	canvas()->update();
        emit itemMoved(moving);
    }
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMenu *editMenu = menuBar()->addMenu(tr("Edit"));
    QMenu *newObjectMenu = editMenu->addMenu(tr("New Object"));

    QAction *newRectangleAction = new QAction(tr("Rectangle"), this);
    connect(newRectangleAction, SIGNAL(triggered(bool)), this, SLOT(newRectangle()));
    newObjectMenu->addAction(newRectangleAction);

    QAction *newLineAction = new QAction(tr("Line"), this);
    connect(newLineAction, SIGNAL(triggered(bool)), this, SLOT(newLine()));
    newObjectMenu->addAction(newLineAction);

    QAction *newEllipseAction = new QAction(tr("Ellipse"), this);
    connect(newEllipseAction, SIGNAL(triggered(bool)), this, SLOT(newEllipse()));
    newObjectMenu->addAction(newEllipseAction);

    QAction *newTextAction = new QAction(tr("Text"), this);
    connect(newTextAction, SIGNAL(triggered(bool)), this, SLOT(newText()));
    newObjectMenu->addAction(newTextAction);

    deleteAction = new QAction(tr("Delete Object"), this);
    connect(deleteAction, SIGNAL(triggered(bool)), this, SLOT(deleteObject()));
    editMenu->addAction(deleteAction);

    QAction *clearAction = new QAction(tr("Clear All"), this);
    connect(clearAction, SIGNAL(triggered(bool)), this, SLOT(clearAll()));
    editMenu->addAction(clearAction);

    QAction *fillAction = new QAction(tr("Fill View"), this);
    connect(fillAction, SIGNAL(triggered(bool)), this, SLOT(fillView()));
    editMenu->addAction(fillAction);

    variantManager = new QtVariantPropertyManager(this);

    connect(variantManager, SIGNAL(valueChanged(QtProperty *, const QVariant &)),
                this, SLOT(valueChanged(QtProperty *, const QVariant &)));

    QtVariantEditorFactory *variantFactory = new QtVariantEditorFactory(this);

    canvas = new QtCanvas(800, 600);
    canvasView = new CanvasView(canvas, this);
    setCentralWidget(canvasView);

    QDockWidget *dock = new QDockWidget(this);
    addDockWidget(Qt::RightDockWidgetArea, dock);

    propertyEditor = new QtTreePropertyBrowser(dock);
    propertyEditor->setFactoryForManager(variantManager, variantFactory);
    dock->setWidget(propertyEditor);

    currentItem = 0;

    connect(canvasView, SIGNAL(itemClicked(QtCanvasItem *)),
            this, SLOT(itemClicked(QtCanvasItem *)));
    connect(canvasView, SIGNAL(itemMoved(QtCanvasItem *)),
            this, SLOT(itemMoved(QtCanvasItem *)));

    fillView();
    itemClicked(0);
}

void MainWindow::newRectangle()
{
    QtCanvasItem *item = addRectangle();
    canvas->update();
    itemClicked(item);
}

void MainWindow::newEllipse()
{
    QtCanvasItem *item = addEllipse();
    canvas->update();
    itemClicked(item);
}

void MainWindow::newLine()
{
    QtCanvasItem *item = addLine();
    canvas->update();
    itemClicked(item);
}

void MainWindow::newText()
{
    QtCanvasItem *item = addText();
    canvas->update();
    itemClicked(item);
}

void MainWindow::deleteObject()
{
    if (!currentItem)
        return;

    delete currentItem;
    itemClicked(0);
    canvas->update();
}

void MainWindow::clearAll()
{
    QtCanvasItemList list = canvas->allItems();
    qDeleteAll(list);
    itemClicked(0);
    canvas->update();
}

void MainWindow::fillView()
{
    for (int i = 0; i < 10; i++) {
        addRectangle();
        addEllipse();
        addLine();
        addText();
    }
    canvas->update();
}

QtCanvasItem *MainWindow::addRectangle()
{
    QtCanvasPolygonalItem *item = new QtCanvasRectangle(rand() % canvas->width(),
                rand() % canvas->height(), 50, 50, canvas);
    int z = rand() % 256;
    item->setBrush(QColor(rand() % 32 * 8, rand() % 32 * 8, rand() % 32 * 8));
    item->setPen(QPen(QColor(rand() % 32*8, rand() % 32*8, rand() % 32*8), 4));
    item->setZ(z);
    item->show();
    return item;
}

QtCanvasItem *MainWindow::addEllipse()
{
    QtCanvasPolygonalItem *item = new QtCanvasEllipse(50, 50, canvas);
    item->setBrush(QColor(rand() % 32 * 8, rand() % 32 * 8, rand() % 32 * 8));
    item->move(rand() % canvas->width(), rand() % canvas->height());
    item->setZ(rand() % 256);
    item->show();
    return item;
}

QtCanvasItem *MainWindow::addLine()
{
    QtCanvasLine *item = new QtCanvasLine(canvas);
    item->setPoints(0, 0, rand() % canvas->width() - canvas->width() / 2,
                rand() % canvas->height() - canvas->height() / 2);
    item->move(rand() % canvas->width(), rand() % canvas->height());
    item->setPen(QPen(QColor(rand() % 32*8, rand() % 32*8, rand() % 32*8), 6));
    item->setZ(rand() % 256);
    item->show();
    return item;
}

QtCanvasItem *MainWindow::addText()
{
    QtCanvasText *item = new QtCanvasText(canvas);
    item->setText(tr("Text"));
    item->setColor(QColor(rand() % 32*8, rand() % 32*8, rand() % 32*8));
    item->move(rand() % canvas->width(), rand() % canvas->height());
    item->setZ(rand() % 256);
    item->show();
    return item;
}

void MainWindow::itemMoved(QtCanvasItem *item)
{
    if (item != currentItem)
        return;

    variantManager->setValue(idToProperty[QLatin1String("xpos")], item->x());
    variantManager->setValue(idToProperty[QLatin1String("ypos")], item->y());
    variantManager->setValue(idToProperty[QLatin1String("zpos")], item->z());
}

void MainWindow::updateExpandState()
{
    QList<QtBrowserItem *> list = propertyEditor->topLevelItems();
    QListIterator<QtBrowserItem *> it(list);
    while (it.hasNext()) {
        QtBrowserItem *item = it.next();
        QtProperty *prop = item->property();
        idToExpanded[propertyToId[prop]] = propertyEditor->isExpanded(item);
    }
}

void MainWindow::itemClicked(QtCanvasItem *item)
{
    updateExpandState();

    QMap<QtProperty *, QString>::ConstIterator itProp = propertyToId.constBegin();
    while (itProp != propertyToId.constEnd()) {
        delete itProp.key();
        itProp++;
    }
    propertyToId.clear();
    idToProperty.clear();

    currentItem = item;
    if (!currentItem) {
        deleteAction->setEnabled(false);
        return;
    }

    deleteAction->setEnabled(true);

    QtVariantProperty *property;

    property = variantManager->addProperty(QVariant::Double, tr("Position X"));
    property->setAttribute(QLatin1String("minimum"), 0);
    property->setAttribute(QLatin1String("maximum"), canvas->width());
    property->setValue(item->x());
    addProperty(property, QLatin1String("xpos"));

    property = variantManager->addProperty(QVariant::Double, tr("Position Y"));
    property->setAttribute(QLatin1String("minimum"), 0);
    property->setAttribute(QLatin1String("maximum"), canvas->height());
    property->setValue(item->y());
    addProperty(property, QLatin1String("ypos"));

    property = variantManager->addProperty(QVariant::Double, tr("Position Z"));
    property->setAttribute(QLatin1String("minimum"), 0);
    property->setAttribute(QLatin1String("maximum"), 256);
    property->setValue(item->z());
    addProperty(property, QLatin1String("zpos"));

    if (item->rtti() == QtCanvasItem::Rtti_Rectangle) {
        QtCanvasRectangle *i = (QtCanvasRectangle *)item;

        property = variantManager->addProperty(QVariant::Color, tr("Brush Color"));
        property->setValue(i->brush().color());
        addProperty(property, QLatin1String("brush"));

        property = variantManager->addProperty(QVariant::Color, tr("Pen Color"));
        property->setValue(i->pen().color());
        addProperty(property, QLatin1String("pen"));

        property = variantManager->addProperty(QVariant::Size, tr("Size"));
        property->setValue(i->size());
        addProperty(property, QLatin1String("size"));
    } else if (item->rtti() == QtCanvasItem::Rtti_Line) {
        QtCanvasLine *i = (QtCanvasLine *)item;

        property = variantManager->addProperty(QVariant::Color, tr("Pen Color"));
        property->setValue(i->pen().color());
        addProperty(property, QLatin1String("pen"));

        property = variantManager->addProperty(QVariant::Point, tr("Vector"));
        property->setValue(i->endPoint());
        addProperty(property, QLatin1String("endpoint"));
    } else if (item->rtti() == QtCanvasItem::Rtti_Ellipse) {
        QtCanvasEllipse *i = (QtCanvasEllipse *)item;

        property = variantManager->addProperty(QVariant::Color, tr("Brush Color"));
        property->setValue(i->brush().color());
        addProperty(property, QLatin1String("brush"));

        property = variantManager->addProperty(QVariant::Size, tr("Size"));
        property->setValue(QSize(i->width(), i->height()));
        addProperty(property, QLatin1String("size"));
    } else if (item->rtti() == QtCanvasItem::Rtti_Text) {
        QtCanvasText *i = (QtCanvasText *)item;

        property = variantManager->addProperty(QVariant::Color, tr("Color"));
        property->setValue(i->color());
        addProperty(property, QLatin1String("color"));

        property = variantManager->addProperty(QVariant::String, tr("Text"));
        property->setValue(i->text());
        addProperty(property, QLatin1String("text"));

        property = variantManager->addProperty(QVariant::Font, tr("Font"));
        property->setValue(i->font());
        addProperty(property, QLatin1String("font"));
    }
}

void MainWindow::addProperty(QtVariantProperty *property, const QString &id)
{
    propertyToId[property] = id;
    idToProperty[id] = property;
    QtBrowserItem *item = propertyEditor->addProperty(property);
    if (idToExpanded.contains(id))
        propertyEditor->setExpanded(item, idToExpanded[id]);
}

void MainWindow::valueChanged(QtProperty *property, const QVariant &value)
{
    if (!propertyToId.contains(property))
        return;

    if (!currentItem)
        return;

    QString id = propertyToId[property];
    if (id == QLatin1String("xpos")) {
        currentItem->setX(value.toDouble());
    } else if (id == QLatin1String("ypos")) {
        currentItem->setY(value.toDouble());
    } else if (id == QLatin1String("zpos")) {
        currentItem->setZ(value.toDouble());
    } else if (id == QLatin1String("text")) {
        if (currentItem->rtti() == QtCanvasItem::Rtti_Text) {
            QtCanvasText *i = (QtCanvasText *)currentItem;
            i->setText(qVariantValue<QString>(value));
        }
    } else if (id == QLatin1String("color")) {
        if (currentItem->rtti() == QtCanvasItem::Rtti_Text) {
            QtCanvasText *i = (QtCanvasText *)currentItem;
            i->setColor(qVariantValue<QColor>(value));
        }
    } else if (id == QLatin1String("brush")) {
        if (currentItem->rtti() == QtCanvasItem::Rtti_Rectangle ||
                currentItem->rtti() == QtCanvasItem::Rtti_Ellipse) {
            QtCanvasPolygonalItem *i = (QtCanvasPolygonalItem *)currentItem;
            QBrush b = i->brush();
            b.setColor(qVariantValue<QColor>(value));
            i->setBrush(b);
        }
    } else if (id == QLatin1String("pen")) {
        if (currentItem->rtti() == QtCanvasItem::Rtti_Rectangle ||
                currentItem->rtti() == QtCanvasItem::Rtti_Line) {
            QtCanvasPolygonalItem *i = (QtCanvasPolygonalItem *)currentItem;
            QPen p = i->pen();
            p.setColor(qVariantValue<QColor>(value));
            i->setPen(p);
        }
    } else if (id == QLatin1String("font")) {
        if (currentItem->rtti() == QtCanvasItem::Rtti_Text) {
            QtCanvasText *i = (QtCanvasText *)currentItem;
            i->setFont(qVariantValue<QFont>(value));
        }
    } else if (id == QLatin1String("endpoint")) {
        if (currentItem->rtti() == QtCanvasItem::Rtti_Line) {
            QtCanvasLine *i = (QtCanvasLine *)currentItem;
            QPoint p = qVariantValue<QPoint>(value);
            i->setPoints(i->startPoint().x(), i->startPoint().y(), p.x(), p.y());
        }
    } else if (id == QLatin1String("size")) {
        if (currentItem->rtti() == QtCanvasItem::Rtti_Rectangle) {
            QtCanvasRectangle *i = (QtCanvasRectangle *)currentItem;
            QSize s = qVariantValue<QSize>(value);
            i->setSize(s.width(), s.height());
        } else if (currentItem->rtti() == QtCanvasItem::Rtti_Ellipse) {
            QtCanvasEllipse *i = (QtCanvasEllipse *)currentItem;
            QSize s = qVariantValue<QSize>(value);
            i->setSize(s.width(), s.height());
        }
    }
    canvas->update();
}

