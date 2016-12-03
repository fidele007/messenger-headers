/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBBrowserDebugOverlayView;

@interface FBBrowserDebugOverlayCoordinator : NSObject {

	double _webViewStartLoadingtime;
	FBBrowserDebugOverlayView* _browserDebuggerOverlayView;

}

@property (nonatomic,retain) FBBrowserDebugOverlayView * browserDebuggerOverlayView;              //@synthesize browserDebuggerOverlayView=_browserDebuggerOverlayView - In the implementation block
-(void)printWebViewStartLoading:(id)arg1 ;
-(void)printWebViewLoadingTime;
-(void)printWebViewTTITime;
-(void)printWebViewPrefetched;
-(FBBrowserDebugOverlayView *)browserDebuggerOverlayView;
-(void)setBrowserDebuggerOverlayView:(FBBrowserDebugOverlayView *)arg1 ;
@end
