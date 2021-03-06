/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNTabBadgeCountControllerListener.h>
#import <Messenger/MNTabBadgeCountController.h>

@protocol MNTabBadgeCountController;
@class MNTabBadgeCountControllerListenerAnnouncer, NSSet, NSString;

@interface MNTabBadgeAggregateCountController : NSObject <MNTabBadgeCountControllerListener, MNTabBadgeCountController> {

	MNTabBadgeCountControllerListenerAnnouncer* _tabBadgeCountControllerListenerAnnouncer;
	NSSet*<MNTabBadgeCountController> _tabBadgeCountControllers;
	long long _badgeCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long badgeCount;                //@synthesize badgeCount=_badgeCount - In the implementation block
-(void)addTabBadgeCountControllerListener:(id)arg1 ;
-(void)didUpdateBadgeCount:(long long)arg1 ;
-(id)initWithTabBadgeCountControllers:(id)arg1 ;
-(void)removeTabBadgeCountControllerListener:(id)arg1 ;
-(void)_setBadgeCount:(long long)arg1 ;
-(void)_updateAggregateBadge;
-(void)dealloc;
-(long long)badgeCount;
@end

