/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBMediaCreativeToolDrawViewDelegate.h>
#import <Messenger/FBMediaCreativeToolbarDelegate.h>
#import <Messenger/FBMediaCreativeTool.h>

@protocol FBVideoCreativeToolsApplier, FBVideoCreativeToolsLoggerProtocol, FBMediaCreativeToolDelegate, FBMediaCreativeToolDrawDelegate;
@class FBMediaCreativeToolsModel, FBVideoCreativeToolsPreviewOverlayView, FBMediaCreativeToolbar, UIView, FBMediaCreativeToolDrawPanGestureRecognizer, FBMediaCreativeToolSingleSelectionState, FBMediaCreativeToolDrawView, NSString;

@interface FBMediaCreativeToolDrawViewController : UIViewController <FBMediaCreativeToolDrawViewDelegate, FBMediaCreativeToolbarDelegate, FBMediaCreativeTool> {

	id<FBVideoCreativeToolsApplier> _applier;
	id<FBVideoCreativeToolsLoggerProtocol> _logger;
	FBMediaCreativeToolsModel* _model;
	CGSize _rawVideoSize;
	FBVideoCreativeToolsPreviewOverlayView* _videoOverlayView;
	FBMediaCreativeToolbar* _toolbar;
	UIView* _videoPreviewContentView;
	BOOL _useDynamicStrokeSize;
	CGPoint _previousTouchPoint;
	GLKVector4 _color;
	FBMediaCreativeToolDrawPanGestureRecognizer* _panRecognizer;
	double _pointSize;
	FBMediaCreativeToolSingleSelectionState* _selectionState;
	/*^block*/id _extraLoggerBlock;
	BOOL _useForceTouch;
	CGPoint _lastVelocityPoint;
	double _lastPointSize;
	id<FBMediaCreativeToolDelegate> _creativeToolDelegate;
	id<FBMediaCreativeToolDrawDelegate> _delegate;

}

@property (nonatomic,retain) FBMediaCreativeToolDrawView * view; 
@property (assign,nonatomic,__weak) id<FBMediaCreativeToolDrawDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
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
@property (assign,nonatomic) BOOL translucent; 
+(id)creativeToolKey;
+(id)_logName;
-(void)_pannedVideoPreviewOverlayView:(id)arg1 ;
-(void)_refreshToolbarButtonStates;
-(UIView *)videoPreviewContentView;
-(unsigned long long)_drawingFilterIndex;
-(id<FBMediaCreativeToolDelegate>)creativeToolDelegate;
-(void)mediaCreativeToolDrawView:(id)arg1 didSelectColor:(id)arg2 atIndexPath:(id)arg3 ;
-(void)mediaCreativeToolbar:(id)arg1 selectedButtonAtIndex:(unsigned long long)arg2 ;
-(NSString *)creativeToolTitle;
-(unsigned long long)glyphSize;
-(FBMediaCreativeToolbar *)creativeToolbar;
-(UIView *)creativeToolTrayView;
-(void)setCreativeToolDelegate:(id<FBMediaCreativeToolDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 applier:(id)arg2 model:(id)arg3 selectionState:(id)arg4 rawVideoSize:(CGSize)arg5 videoOverlayView:(id)arg6 logger:(id)arg7 extraLoggerBlock:(/*^block*/id)arg8 ;
-(unsigned long long)glyphName;
-(void)setDelegate:(id<FBMediaCreativeToolDrawDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMediaCreativeToolDrawDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
