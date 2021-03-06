/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@class FBLazyCreator, MNContactAnalyticsLogger, NSString;

@interface MNAddMessengerContactController : NSObject <FBClassProvidable> {

	FBLazyCreator* _threadContextManagerCreator;
	MNContactAnalyticsLogger* _contactAnalyicsLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)addMessengerContactWithCanonicalThreadKey:(id)arg1 source:(id)arg2 ;
-(id)initWithThreadContextManagerProvider:(id)arg1 contactAnalyicsLogger:(id)arg2 ;
@end

