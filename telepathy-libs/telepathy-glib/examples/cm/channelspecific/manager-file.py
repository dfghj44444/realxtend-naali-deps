# Input for tools/manager-file.py

MANAGER = 'example_csh'
PARAMS = {
        'example' : {
            'account': {
                'dtype': 's',
                'flags': 'required register',
                'filter': 'account_param_filter',
                # 'filter_data': 'NULL',
                # 'default': ...,
                # 'struct_field': '...',
                # 'setter_data': 'NULL',
                },
            },
        }
STRUCTS = {
        'example': 'ExampleParams'
        }
