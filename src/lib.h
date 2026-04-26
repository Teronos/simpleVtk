#pragma once

#ifdef _DEBUG
#pragma comment(lib, "vtkCommonCored.lib")
#pragma comment(lib, "vtkCommonMiscd.lib")
#pragma comment(lib, "vtkCommonColord.lib")
#pragma comment(lib, "vtkCommonDataModeld.lib")
#pragma comment(lib, "vtkCommonExecutionModeld.lib")
#pragma comment(lib, "vtkCommonMathd.lib")
#pragma comment(lib, "vtkCommonSystemd.lib")
#pragma comment(lib, "vtkCommonTransformsd.lib")
#pragma comment(lib, "vtkFiltersGenerald.lib")
#pragma comment(lib, "vtkFiltersGeometryd.lib")
#pragma comment(lib, "vtkFiltersModelingd.lib")
#pragma comment(lib, "vtkFiltersExtractiond.lib")
#pragma comment(lib, "vtkFiltersHybridd.lib")
#pragma comment(lib, "vtkFiltersSourcesd.lib")
#pragma comment(lib, "vtkFiltersCored.lib")
#pragma comment(lib, "vtkFiltersFlowPathsd.lib")
#pragma comment(lib, "vtksysd.lib")

#pragma comment(lib, "vtkRenderingCored.lib")
#pragma comment(lib, "vtkRenderingOpenGL2d.lib")
#pragma comment(lib, "vtkfreetyped.lib")
#pragma comment(lib, "vtkRenderingFreeTyped.lib")  // текст (title/labels)
#pragma comment(lib, "vtkRenderingAnnotationd.lib")// scalar bar, axes, etc.
#pragma comment(lib, "vtkRenderingHyperTreeGridd.lib")
#pragma comment(lib, "vtkFiltersHyperTreed.lib")

#pragma comment(lib, "vtkIOCored.lib")
#pragma comment(lib, "vtkIOImaged.lib")	// PNGWriter/JPEGWriter/...
#pragma comment(lib, "vtkjpegd.lib")
#pragma comment(lib, "vtkpngd.lib")
#pragma comment(lib, "vtkRenderingUId.lib")
#pragma comment(lib, "vtkInteractionStyled.lib")
#pragma comment(lib, "vtkgladd.lib")
#pragma comment(lib, "vtktokend.lib")
#pragma comment(lib, "vtkpugixmld.lib")
#pragma comment(lib, "vtkfmtd.lib")
#pragma comment(lib, "vtklogurud.lib")   // VTK logging 
#pragma comment(lib, "vtkIOExportd.lib")
#pragma comment(lib, "vtkInteractionWidgetsd.lib")
#pragma comment(lib, "vtkzlibd.lib")
#pragma comment(lib, "vtkRenderingLabeld.lib")

// video output
#pragma comment(lib, "vtkIOFFMPEGd.lib")
#pragma comment(lib, "vtkIOMovied.lib")
#else
// советы chatgpt
#pragma comment(lib, "vtkCommonCore.lib")
#pragma comment(lib, "vtkCommonMisc.lib")
#pragma comment(lib, "vtkCommonColor.lib")
#pragma comment(lib, "vtkCommonDataModel.lib")
#pragma comment(lib, "vtkCommonExecutionModel.lib")
#pragma comment(lib, "vtkCommonMath.lib")
#pragma comment(lib, "vtkCommonSystem.lib")
#pragma comment(lib, "vtkCommonTransforms.lib")
#pragma comment(lib, "vtkFiltersGeneral.lib")
#pragma comment(lib, "vtkFiltersGeometry.lib")
#pragma comment(lib, "vtkFiltersModeling.lib")
#pragma comment(lib, "vtkFiltersExtraction.lib")
#pragma comment(lib, "vtkFiltersHybrid.lib")
#pragma comment(lib, "vtkFiltersSources.lib")
#pragma comment(lib, "vtkFiltersCore.lib")
#pragma comment(lib, "vtkFiltersFlowPaths.lib")
#pragma comment(lib, "vtksys.lib")

#pragma comment(lib, "vtkRenderingCore.lib")
#pragma comment(lib, "vtkRenderingOpenGL2.lib")
#pragma comment(lib, "vtkfreetype.lib")
#pragma comment(lib, "vtkRenderingFreeType.lib")  // текст (title/labels)
#pragma comment(lib, "vtkRenderingAnnotation.lib")// scalar bar, axes, etc.
#pragma comment(lib, "vtkRenderingHyperTreeGrid.lib")
#pragma comment(lib, "vtkFiltersHyperTree.lib")

#pragma comment(lib, "vtkIOCore.lib")
#pragma comment(lib, "vtkIOImage.lib")	// PNGWriter/JPEGWriter/...
#pragma comment(lib, "vtkjpeg.lib")
#pragma comment(lib, "vtkpng.lib")
#pragma comment(lib, "vtkRenderingUI.lib")
#pragma comment(lib, "vtkInteractionStyle.lib")
#pragma comment(lib, "vtkglad.lib")
#pragma comment(lib, "vtktoken.lib")
#pragma comment(lib, "vtkpugixml.lib")
#pragma comment(lib, "vtkfmt.lib")
#pragma comment(lib, "vtkloguru.lib")   // VTK logging 
#pragma comment(lib, "vtkIOExport.lib")
#pragma comment(lib, "vtkInteractionWidgets.lib")
#pragma comment(lib, "vtkzlib.lib")
#pragma comment(lib, "vtkRenderingLabel.lib")

// video output
#pragma comment(lib, "vtkIOFFMPEG.lib")
#pragma comment(lib, "vtkIOMovie.lib")
#endif

// VTK - auto initialization
// Since VTK 6.0 these lines need to go at the module level before any other VTK calls.
// See http://www.vtk.org/Wiki/VTK/VTK_6_Migration/Factories_now_require_defines for details.

#include <vtkAutoInit.h>
VTK_MODULE_INIT(vtkRenderingOpenGL2);
VTK_MODULE_INIT(vtkInteractionStyle);
VTK_MODULE_INIT(vtkRenderingFreeType);
