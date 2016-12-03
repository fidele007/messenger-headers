/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CALayerDelegate.h>
#import <Messenger/FBDisplayableMediaViewProvider.h>

@protocol FBScrollPositionModifyingController, FBVideoFromViewDelegate;
@class UIView, FBVideoViewManager, NSString;

@interface FBVideoPlayerFromMediaProvider : NSObject <CALayerDelegate, FBDisplayableMediaViewProvider> {

	BOOL _didAddVideoViewInfo;
	UIView* _viewToReturnVideoTo;
	unsigned long long _layerOrViewPosition;
	FBVideoViewManager* _videoViewManager;
	id<FBScrollPositionModifyingController> _containingScrollController;
	BOOL _needsDismissal;
	id<FBVideoFromViewDelegate> _fromViewDelegate;

}

@property (nonatomic,retain) FBVideoViewManager * videoViewManager;                            //@synthesize videoViewManager=_videoViewManager - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoFromViewDelegate> fromViewDelegate;              //@synthesize fromViewDelegate=_fromViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)needsMediaViewInfoForSourceInfo:(id)arg1 sender:(id)arg2 ;
-(void)didAddMediaViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(void)willFinishAnimatingViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(void)didFinishAnimatingViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(id)_findWindowForLayerOrView:(id)arg1 ;
-(id)initWithVideoViewManager:(id)arg1 containingScrollController:(id)arg2 ;
-(void)setVideoViewManager:(FBVideoViewManager *)arg1 ;
-(FBVideoViewManager *)videoViewManager;
-(id<FBVideoFromViewDelegate>)fromViewDelegate;
-(void)setFromViewDelegate:(id<FBVideoFromViewDelegate>)arg1 ;
@end

