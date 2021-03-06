/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@class NSMutableDictionary, MNThreadToastCoordinatorListenerAnnouncer, NSString;

@interface MNThreadToastCoordinator : NSObject <FBViewerContextClassProvidable> {

	NSMutableDictionary* _toastProvidersByIdentifier;
	MNThreadToastCoordinatorListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerToastProvider:(id)arg1 forIdentifier:(id)arg2 ;
-(void)unregisterToastProviderForIdentifier:(id)arg1 ;
-(id)toastProvidersByIdentifier;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)init;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

