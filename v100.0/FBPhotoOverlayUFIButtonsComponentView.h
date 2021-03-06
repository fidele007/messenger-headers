/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/CKComponentProvider.h>

@protocol FBPhotoOverlayUFIButtonsComponentViewDelegate;
@class CKComponentHostingView, FBFeedToolbox, NSArray, NSString;

@interface FBPhotoOverlayUFIButtonsComponentView : UIView <CKComponentProvider> {

	CKComponentHostingView* _ufiHostingView;
	FBFeedToolbox* _toolbox;
	unsigned long long _theme;
	NSArray* _trackingCodes;
	id<FBPhotoOverlayUFIButtonsComponentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPhotoOverlayUFIButtonsComponentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)_commentAction:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 theme:(unsigned long long)arg2 trackingCodes:(id)arg3 toolbox:(id)arg4 ;
-(void)updateWithFeedback:(id)arg1 canViewerShare:(BOOL)arg2 ;
-(void)_likeAction:(id)arg1 ;
-(void)_shareAction:(id)arg1 ;
-(void)setDelegate:(id<FBPhotoOverlayUFIButtonsComponentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPhotoOverlayUFIButtonsComponentViewDelegate>)delegate;
@end

