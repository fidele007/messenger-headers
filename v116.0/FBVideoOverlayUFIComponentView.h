/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/CKComponentProvider.h>
#import <Messenger/CKComponentHostingViewDelegate.h>

@protocol FBVideoOverlayUFIComponentViewDelegate;
@class CKComponentHostingView, FBFeedToolbox, NSString;

@interface FBVideoOverlayUFIComponentView : UIView <CKComponentProvider, CKComponentHostingViewDelegate> {

	CKComponentHostingView* _ufiHostingView;
	FBFeedToolbox* _toolbox;
	unsigned long long _ufiThemeType;
	id<FBVideoOverlayUFIComponentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBVideoOverlayUFIComponentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)initWithUFIThemeType:(unsigned long long)arg1 toolbox:(id)arg2 ;
-(void)updateWithFeedback:(id)arg1 video:(id)arg2 canViewerShare:(BOOL)arg3 trackingCodes:(id)arg4 omitButtons:(BOOL)arg5 supportSpatialReaction:(BOOL)arg6 mediaId:(id)arg7 ;
-(void)_commentAction:(id)arg1 ;
-(void)_shareAction:(id)arg1 context:(id)arg2 ;
-(void)_countsAction:(id)arg1 ;
-(void)_reactionsInputPresentationAction:(id)arg1 ;
-(void)_reactionsInputDismissalAction:(id)arg1 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBVideoOverlayUFIComponentViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBVideoOverlayUFIComponentViewDelegate>)delegate;
@end

