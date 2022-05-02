include(hunter_add_version)
include(hunter_cacheable)
include(hunter_download)
include(hunter_pick_scheme)

hunter_add_version(
    PACKAGE_NAME
    print
    VERSION
    "v1.0"
    URL
    "https://github.com/sasha16613/print/archive/v1.tar.gz"
    SHA1
    f6a82155ee0da314cfcb1882071117be769cbbd5
)

hunter_pick_scheme(DEFAULT url_sha1_cmake)
hunter_cacheable(print)
hunter_download(PACKAGE_NAME print)
