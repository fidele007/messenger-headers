/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNServiceControllable.h>

@class MNStartupNetworkAnalyticsServiceInjector, NSString;

@interface MNStartupNetworkAnalyticsService : NSObject <FBClassInjectable, MNServiceControllable> {

	MNStartupNetworkAnalyticsServiceInjector* _injector;
	unique_ptr<facebook::mobile::xplat::executor::ObserverToken, std::__1::default_delete<facebook::mobile::xplat::executor::ObserverToken> >* _listenerToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
