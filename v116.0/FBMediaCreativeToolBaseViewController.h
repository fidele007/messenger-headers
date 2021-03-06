/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBMediaCreativeTool.h>
#import <Messenger/FBMediaCreativeToolsBaseViewDelegate.h>

@protocol FBMediaCreativeToolDelegate, FBVideoCreativeToolsApplier, FBMediaCreativeToolState, FBVideoCreativeToolsLoggerProtocol;
@class NSString, FBMediaCreativeToolbar, UIView, FBUserSession, FBMediaCreativeToolsBaseView;

@interface FBMediaCreativeToolBaseViewController : UIViewController <FBMediaCreativeTool, FBMediaCreativeToolsBaseViewDelegate> {

	BOOL _translucent;
	id<FBMediaCreativeToolDelegate> _creativeToolDelegate;
	FBUserSession* _session;
	id<FBVideoCreativeToolsApplier> _applier;
	id<FBMediaCreativeToolState> _selectionState;
	id<FBVideoCreativeToolsLoggerProtocol> _logger;
	/*^block*/id _extraLoggerBlock;

}

@property (nonatomic,retain) FBUserSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMediaCreativeToolsBaseView * view; 
@property (nonatomic,retain) id<FBVideoCreativeToolsApplier> applier;                                  //@synthesize applier=_applier - In the implementation block
@property (nonatomic,retain) id<FBMediaCreativeToolState> selectionState;                              //@synthesize selectionState=_selectionState - In the implementation block
@property (nonatomic,retain) id<FBVideoCreativeToolsLoggerProtocol> logger;                            //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy) id extraLoggerBlock;                                                        //@synthesize extraLoggerBlock=_extraLoggerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * creativeToolTitle; 
@property (nonatomic,readonly) unsigned long long glyphName; 
@property (nonatomic,readonly) unsigned long long glyphSize; 
@property (nonatomic,readonly) FBMediaCreativeToolbar * creativeToolbar; 
@property (nonatomic,readonly) UIView * creativeToolTrayView; 
@property (nonatomic,readonly) UIView * videoPreviewContentView; 
@property (nonatomic,readonly) BOOL handlesGestures; 
@property (assign,nonatomic,__weak) id<FBMediaCreativeToolDelegate> creativeToolDelegate;              //@synthesize creativeToolDelegate=_creativeToolDelegate - In the implementation block
@property (assign,nonatomic) BOOL translucent;                                                         //@synthesize translucent=_translucent - In the implementation block
+(id)creativeToolKey;
+(id)_logName;
-(id)initWithSession:(id)arg1 applier:(id)arg2 selectionState:(id)arg3 logger:(id)arg4 extraLoggerBlock:(/*^block*/id)arg5 ;
-(id)extraLoggerBlock;
-(id)_createCollectionViewData;
-(void)setExtraLoggerBlock:(id)arg1 ;
-(void)mediaCreativeToolsBaseView:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id<FBMediaCreativeToolDelegate>)creativeToolDelegate;
-(BOOL)creativeToolEffectIsBrandedAtSelectionState:(id)arg1 ;
-(NSString *)creativeToolTitle;
-(FBMediaCreativeToolbar *)creativeToolbar;
-(UIView *)creativeToolTrayView;
-(UIView *)videoPreviewContentView;
-(BOOL)handlesGestures;
-(void)setCreativeToolDelegate:(id<FBMediaCreativeToolDelegate>)arg1 ;
-(unsigned long long)glyphSize;
-(unsigned long long)glyphName;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setTranslucent:(BOOL)arg1 ;
-(id<FBMediaCreativeToolState>)selectionState;
-(void)setSession:(FBUserSession *)arg1 ;
-(BOOL)translucent;
-(FBUserSession *)session;
-(id<FBVideoCreativeToolsLoggerProtocol>)logger;
-(void)setLogger:(id<FBVideoCreativeToolsLoggerProtocol>)arg1 ;
-(void)setApplier:(id<FBVideoCreativeToolsApplier>)arg1 ;
-(void)setSelectionState:(id<FBMediaCreativeToolState>)arg1 ;
-(id<FBVideoCreativeToolsApplier>)applier;
@end

