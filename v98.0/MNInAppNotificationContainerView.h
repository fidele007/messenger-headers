/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, NSString;

@interface MNInAppNotificationContainerView : UIView <UIGestureRecognizerDelegate> {

	UIView* _contentView;
	UIView* _backgroundView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layoutContentView;
-(void)_layoutBackgroundView;
-(id)initWithContentView:(id)arg1 backgroundView:(id)arg2 ;
-(void)layoutSubviews;
@end

