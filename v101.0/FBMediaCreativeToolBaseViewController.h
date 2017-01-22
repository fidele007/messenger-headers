/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
@property (assign,nonatomic,__weak) id<FBMediaCreativeToolDelegate> creativeToolDelegate;              //@synthesize creativeToolDelegate=_creativeToolDelegate - In the implementation block
@property (assign,nonatomic) BOOL translucent;                                                         //@synthesize translucent=_translucent - In the implementation block
+(id)creativeToolKey;
+(id)_logName;
-(id)_createCollectionViewData;
-(id)initWithSession:(id)arg1 applier:(id)arg2 selectionState:(id)arg3 logger:(id)arg4 extraLoggerBlock:(/*^block*/id)arg5 ;
-(id)extraLoggerBlock;
-(void)setExtraLoggerBlock:(id)arg1 ;
-(UIView *)videoPreviewContentView;
-(id<FBMediaCreativeToolDelegate>)creativeToolDelegate;
-(NSString *)creativeToolTitle;
-(unsigned long long)glyphSize;
-(FBMediaCreativeToolbar *)creativeToolbar;
-(UIView *)creativeToolTrayView;
-(void)setCreativeToolDelegate:(id<FBMediaCreativeToolDelegate>)arg1 ;
-(void)mediaCreativeToolsBaseView:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(unsigned long long)glyphName;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id<FBMediaCreativeToolState>)selectionState;
-(id<FBVideoCreativeToolsLoggerProtocol>)logger;
-(void)setLogger:(id<FBVideoCreativeToolsLoggerProtocol>)arg1 ;
-(BOOL)translucent;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)setApplier:(id<FBVideoCreativeToolsApplier>)arg1 ;
-(id<FBVideoCreativeToolsApplier>)applier;
-(void)setSelectionState:(id<FBMediaCreativeToolState>)arg1 ;
@end
