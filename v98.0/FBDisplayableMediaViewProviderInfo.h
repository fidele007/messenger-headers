/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBScrollPositionModifyingController;
#import <Messenger/Messenger-Structs.h>
@class FBDisplayableMediaViewProviderSourceInfo, UIView, UIWindow;

@interface FBDisplayableMediaViewProviderInfo : NSObject {

	id _viewOrLayer;
	FBDisplayableMediaViewProviderSourceInfo* _sourceInfo;
	UIView* _frameView;
	UIWindow* _window;
	id<FBScrollPositionModifyingController> _containingScrollController;
	CGRect _frame;

}

@property (nonatomic,readonly) id viewOrLayer;                                                                  //@synthesize viewOrLayer=_viewOrLayer - In the implementation block
@property (nonatomic,readonly) FBDisplayableMediaViewProviderSourceInfo * sourceInfo;                           //@synthesize sourceInfo=_sourceInfo - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                                                    //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) UIView * frameView;                                                              //@synthesize frameView=_frameView - In the implementation block
@property (nonatomic,readonly) UIWindow * window;                                                               //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) id<FBScrollPositionModifyingController> containingScrollController;              //@synthesize containingScrollController=_containingScrollController - In the implementation block
-(id<FBScrollPositionModifyingController>)containingScrollController;
-(id)initWithViewOrLayer:(id)arg1 sourceInfo:(id)arg2 frame:(CGRect)arg3 frameView:(id)arg4 containingScrollController:(id)arg5 window:(id)arg6 ;
-(id)viewOrLayer;
-(FBDisplayableMediaViewProviderSourceInfo *)sourceInfo;
-(UIWindow *)window;
-(CGRect)frame;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(UIView *)frameView;
@end

