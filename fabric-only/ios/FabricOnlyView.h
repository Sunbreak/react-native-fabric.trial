// This guard prevent this file to be compiled in the old architecture.
#ifdef RCT_NEW_ARCH_ENABLED
#import <React/RCTViewComponentView.h>
#import <UIKit/UIKit.h>

#ifndef FabricOnlyViewNativeComponent_h
#define FabricOnlyViewNativeComponent_h

NS_ASSUME_NONNULL_BEGIN

@interface FabricOnlyView : RCTViewComponentView
@end

NS_ASSUME_NONNULL_END

#endif /* FabricOnlyViewNativeComponent_h */
#endif /* RCT_NEW_ARCH_ENABLED */
