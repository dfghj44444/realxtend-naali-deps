#
# Makefile
#
# $Id: //poco/1.3/Util/testsuite/Makefile#2 $
#
# Makefile for Poco Util testsuite
#

include $(POCO_BASE)/build/rules/global

objects = AbstractConfigurationTest ConfigurationTestSuite \
	ConfigurationMapperTest ConfigurationViewTest Driver  \
	HelpFormatterTest IniFileConfigurationTest LayeredConfigurationTest \
	LoggingConfiguratorTest MapConfigurationTest \
	OptionProcessorTest OptionSetTest OptionTest \
	OptionsTestSuite PropertyFileConfigurationTest \
	SystemConfigurationTest UtilTestSuite XMLConfigurationTest \
	FilesystemConfigurationTest ValidatorTest \
	TimerTestSuite TimerTest

target         = testrunner
target_version = 1
target_libs    = PocoUtil PocoXML PocoFoundation CppUnit

include $(POCO_BASE)/build/rules/exec
