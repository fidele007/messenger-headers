/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@class MNManagePageHandlerInjector, MNThreadViewModel, MNManagePageInThreadHandler, NSString;

@interface MNManagePageHandler : NSObject <FBClassInjectable, MNThreadViewModelConfigurable> {

	MNManagePageHandlerInjector* _injector;
	MNThreadViewModel* _threadViewModel;
	MNManagePageInThreadHandler* _managePageInThreadHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)threadViewModel;
-(void)presentManagePageInThreadControllerWithAdPreferencesLink:(id)arg1 adProperties:(id)arg2 summaryUpdateCreator:(id)arg3 ;
-(id)initWithInjector:(id)arg1 ;
@end

