/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBInstantGameListUIMetrics, FBUserSession, FBInstantGameCascadingProfileImageView, UILabel;

@interface FBInstantGameSocialRowView : UIView {

	FBInstantGameListUIMetrics* _metrics;
	FBUserSession* _session;
	FBInstantGameCascadingProfileImageView* _cascadingProfileImageView;
	UILabel* _socialTextView;

}
-(void)setSocialText:(id)arg1 imageURLs:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

