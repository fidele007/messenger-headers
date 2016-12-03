/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNViewModelUpdateMonitoring.h>
#import <Messenger/MNGroupsMembersPresenceCollectionListener.h>

@protocol MNViewModelUpdating;
@class NSString;

@interface MNGroupsMembersPresenceUpdateMonitor : NSObject <MNViewModelUpdateMonitoring, MNGroupsMembersPresenceCollectionListener> {

	id<MNViewModelUpdating> _updater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNViewModelUpdating> updater;              //@synthesize updater=_updater - In the implementation block
-(void)didUpdatePresenceValues;
-(void)setUpdater:(id<MNViewModelUpdating>)arg1 ;
-(id<MNViewModelUpdating>)updater;
@end

