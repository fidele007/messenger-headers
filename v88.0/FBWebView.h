/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, UIScrollView, UIView, NSURLRequest;


@protocol FBWebView <NSObject>
@property (assign,nonatomic) int displayState; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * currentLocationURL; 
@property (nonatomic,readonly) BOOL canGoBack; 
@property (nonatomic,readonly) BOOL canGoForward; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * bannerView; 
@property (nonatomic,retain) UIView * errorView; 
@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (assign,nonatomic) BOOL isBannerAtTop; 
@property (assign,nonatomic,__weak) id<FBWebViewDelegate> delegate; 
@property (nonatomic,readonly) int webViewImplementation; 
@property (assign,nonatomic) BOOL youtubeNavigationFix; 
@property (assign,setter=setAllowPopupsOnlyDuringUserInteraction:,nonatomic) BOOL allowPopupsOnlyDuringUserInteraction; 
@optional
-(BOOL)currentlyCrashed;
-(BOOL)recoveredFromOOMCrash;
-(void)addScriptMessageHandlerForName:(id)arg1;
-(id)backForwardList;
-(void)removeScriptMessageHandlerForName:(id)arg1;

@required
-(void)setDisplayState:(int)arg1;
-(int)displayState;
-(NSURL *)currentLocationURL;
-(int)webViewImplementation;
-(void)setGestureRecognizersEnabled:(BOOL)arg1;
-(void)updateOrientationWithOrientation:(long long)arg1;
-(void)setYoutubeNavigationFix:(BOOL)arg1;
-(void)setAllowPopupsOnlyDuringUserInteraction:(BOOL)arg1;
-(void)setIsBannerAtTop:(BOOL)arg1;
-(BOOL)isBannerAtTop;
-(void)safeExecuteJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)youtubeNavigationFix;
-(BOOL)allowPopupsOnlyDuringUserInteraction;
-(void)setDelegate:(id)arg1;
-(void)reload;
-(id<FBWebViewDelegate>)delegate;
-(NSURLRequest *)request;
-(NSString *)title;
-(UIScrollView *)scrollView;
-(void)setDataDetectorTypes:(unsigned long long)arg1;
-(unsigned long long)dataDetectorTypes;
-(void)loadRequest:(id)arg1;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
-(BOOL)isLoading;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)setKeyboardDisplayRequiresUserAction:(BOOL)arg1;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(BOOL)hasOnlySecureContent;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setBannerView:(id)arg1;
-(UIView *)bannerView;
-(void)setErrorView:(id)arg1;
-(UIView *)errorView;

@end
