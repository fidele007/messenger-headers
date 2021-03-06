/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSingleModelMonitoring.h>
#import <Messenger/MNGroupsMembersPresenceCollectionListener.h>

@protocol MNModelInvalidating;
@class NSString;

@interface MNGroupsMembersPresenceUpdateMonitor : NSObject <MNSingleModelMonitoring, MNGroupsMembersPresenceCollectionListener> {

	id<MNModelInvalidating> _invalidator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNModelInvalidating> invalidator;              //@synthesize invalidator=_invalidator - In the implementation block
-(id<MNModelInvalidating>)invalidator;
-(void)setInvalidator:(id<MNModelInvalidating>)arg1 ;
-(void)didUpdatePresenceValues;
-(void)stopMonitoring;
-(void)startMonitoring;
@end

