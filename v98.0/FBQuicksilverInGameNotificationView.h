/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, FBInstantGameUIMetrics, FBInstantGameInGameNotificationConfig;

@interface FBQuicksilverInGameNotificationView : UIView {

	UILabel* _notificationLabel;
	FBInstantGameUIMetrics* _metrics;
	FBInstantGameInGameNotificationConfig* _config;

}

@property (nonatomic,copy) FBInstantGameInGameNotificationConfig * config;              //@synthesize config=_config - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBInstantGameInGameNotificationConfig *)config;
-(void)setConfig:(FBInstantGameInGameNotificationConfig *)arg1 ;
@end

