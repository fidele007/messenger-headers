/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNInAppNotificationPluginViewCloseActionHandler;
@class UIButton, MNInAppNotificationPluginContainerView;

@interface MNInAppNotificationPluginView : UIView {

	UIButton* _closeButton;
	MNInAppNotificationPluginContainerView* _contentView;
	id<MNInAppNotificationPluginViewCloseActionHandler> _closeActionHandler;

}

@property (nonatomic,copy) MNInAppNotificationPluginContainerView * contentView;                                         //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) id<MNInAppNotificationPluginViewCloseActionHandler> closeActionHandler;              //@synthesize closeActionHandler=_closeActionHandler - In the implementation block
-(void)setCloseActionHandler:(id<MNInAppNotificationPluginViewCloseActionHandler>)arg1 ;
-(void)_closeButtonTapped:(id)arg1 ;
-(id<MNInAppNotificationPluginViewCloseActionHandler>)closeActionHandler;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNInAppNotificationPluginContainerView *)contentView;
-(void)setContentView:(MNInAppNotificationPluginContainerView *)arg1 ;
@end

