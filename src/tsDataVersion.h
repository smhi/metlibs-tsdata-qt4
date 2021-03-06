#ifndef METLIBS_TSDATA_VERSION_H
#define METLIBS_TSDATA_VERSION_H

#define METLIBS_TSDATA_VERSION_MAJOR 5
#define METLIBS_TSDATA_VERSION_MINOR 3
#define METLIBS_TSDATA_VERSION_PATCH 0

#define METLIBS_TSDATA_VERSION_INT(major,minor,patch) \
    (1000000*major + 1000*minor + patch)
#define METLIBS_TSDATA_VERSION_CURRENT_INT \
    METLIBS_TSDATA_VERSION_INT(METLIBS_TSDATA_VERSION_MAJOR, METLIBS_TSDATA_VERSION_MINOR, METLIBS_TSDATA_VERSION_PATCH)

#endif // METLIBS_TSDATA_VERSION_H
