hunter_config(ceres-solver
  VERSION ${HUNTER_ceres-solver_VERSION} CMAKE_ARGS
    LAPACK=ON
    SUITESPARSE=ON
    CXSPARSE=ON # since 1.14.0-p1
)
hunter_config(LAPACK
  VERSION ${HUNTER_LAPACK_VERSION}
  CMAKE_ARGS BUILD_SHARED_LIBS=ON
)
