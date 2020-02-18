#ifndef REPACK_H
#define REPACK_H

/********************************************************************
 * Include header files that are required by function declaration
 *******************************************************************/
#include "vpr_context.h"
#include "vpr_device_annotation.h"
#include "vpr_clustering_annotation.h"
#include "vpr_routing_annotation.h"

/********************************************************************
 * Function declaration
 *******************************************************************/

/* begin namespace openfpga */
namespace openfpga {

void pack_physical_pbs(const DeviceContext& device_ctx,
                       const VprDeviceAnnotation& device_annotation,
                       VprClusteringAnnotation& clustering_annotation,
                       const VprRoutingAnnotation& routing_annotation,
                       const bool& verbose);

} /* end namespace openfpga */

#endif
