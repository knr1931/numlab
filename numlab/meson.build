# subdir('linopt')

# numlab_include_directories = [
#    'linopt',
# ]

numlab_exe = executable(
    'numlab',
    'numlab.cpp',
    # include_directories: numlab_include_directories,
    install:true,
    install_dir : join_paths(get_option('prefix'), 'bin'),
    # link_with: [linopt_lib,
    #    ],
)

