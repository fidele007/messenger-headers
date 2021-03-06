/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAccessibilityInvalidationEventsListener.h>
#import <Messenger/FBSectionComponentContextMonitor.h>

@class FBSectionComponentContextInvalidationListenerAnnouncer, NSString;

@interface FBSectionComponentContextUIAccessibilityMonitor : NSObject <FBAccessibilityInvalidationEventsListener, FBSectionComponentContextMonitor> {

	FBSectionComponentContextInvalidationListenerAnnouncer* _announcer;

}

@property (nonatomic,retain) FBSectionComponentContextInvalidationListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAnnouncer:(FBSectionComponentContextInvalidationListenerAnnouncer *)arg1 ;
-(FBSectionComponentContextInvalidationListenerAnnouncer *)announcer;
-(void)didReceiveAccessibilityInvalidation;
-(void)setInvalidationAnnouncer:(id)arg1 ;
-(id)init;
@end

