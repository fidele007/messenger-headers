/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPillView.h>

@class UIImageView;

@interface FBFeedNewStoriesPillView : FBPillView {

	UIImageView* _leftImageView;
	unsigned long long _unreadCount;

}

@property (assign,nonatomic) unsigned long long unreadCount;              //@synthesize unreadCount=_unreadCount - In the implementation block
-(id)messageToDisplay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUnreadCount:(unsigned long long)arg1 ;
-(unsigned long long)unreadCount;
@end
