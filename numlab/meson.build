# subdir('linopt')

numlab_sources = [
    'numlab.cpp',
    'src/common/output.cpp',
    'src/diffeqs/diffeq.cpp',
    'src/odemethods/eulermethod.cpp',
]

numlab_include_directories = [
    'src',
    'src/common',
    'src/diffeqs',
    'src/odemethods'
]

numlab_exe = executable(
    'numlab',
    numlab_sources,
    include_directories: numlab_include_directories,
    install:true,
    install_dir : join_paths(get_option('prefix'), 'bin'),
    # link_with: [linopt_lib,
    #    ],
)

