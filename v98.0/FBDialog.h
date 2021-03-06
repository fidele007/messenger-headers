/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol FBDialogDelegate;
@class NSMutableDictionary, NSString, NSURL, UIWebView, UIActivityIndicatorView, UIButton, FBFrictionlessRequestSettings, UIView;

@interface FBDialog : UIView <UIWebViewDelegate> {

	id<FBDialogDelegate> _delegate;
	NSMutableDictionary* _params;
	NSString* _serverURL;
	NSURL* _loadingURL;
	UIWebView* _webView;
	UIActivityIndicatorView* _spinner;
	UIButton* _closeButton;
	long long _orientation;
	BOOL _showingKeyboard;
	BOOL _isViewInvisible;
	FBFrictionlessRequestSettings* _frictionlessSettings;
	UIView* _modalBackgroundView;
	BOOL _everShown;

}

@property (assign,nonatomic) id<FBDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * params;               //@synthesize params=_params - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setParams:(NSMutableDictionary *)arg1 ;
-(void)addRoundedRectToPath:(CGContextRef)arg1 rect:(CGRect)arg2 radius:(float)arg3 ;
-(CGAffineTransform)transformForOrientation;
-(void)bounce2AnimationStopped;
-(void)removeObservers;
-(void)showWebView;
-(void)dialogWillDisappear;
-(void)postDismissCleanup;
-(id)getStringFromUrl:(id)arg1 needle:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 fill:(const double*)arg2 radius:(double)arg3 ;
-(void)strokeLines:(CGRect)arg1 stroke:(const double*)arg2 ;
-(void)bounce1AnimationStopped;
-(void)dialogWillAppear;
-(void)addObservers;
-(void)dismissWithError:(id)arg1 animated:(BOOL)arg2 ;
-(void)dialogSuccessHandleFrictionlessResponses:(id)arg1 ;
-(void)dialogDidSucceed:(id)arg1 ;
-(void)updateWebOrientation;
-(BOOL)shouldRotateToOrientation:(long long)arg1 ;
-(void)sizeToFitOrientation:(BOOL)arg1 ;
-(void)loadURL:(id)arg1 get:(id)arg2 ;
-(id)generateURL:(id)arg1 params:(id)arg2 ;
-(void)dismissWithSuccess:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)testBoolUrlParam:(id)arg1 param:(id)arg2 ;
-(id)initWithURL:(id)arg1 params:(id)arg2 isViewInvisible:(BOOL)arg3 frictionlessSettings:(id)arg4 delegate:(id)arg5 ;
-(void)cancel;
-(void)show;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<FBDialogDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBDialogDelegate>)delegate;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)load;
-(void)dismiss:(BOOL)arg1 ;
-(void)deviceOrientationDidChange:(void*)arg1 ;
-(void)dialogDidCancel:(id)arg1 ;
-(void)showSpinner;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)hideSpinner;
-(NSMutableDictionary *)params;
@end

