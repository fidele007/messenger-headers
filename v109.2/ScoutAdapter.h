/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <Messenger/ScoutProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ScoutAdapter : NSObject <FBViewerContextClassProvidable, ScoutProvider> {

	shared_ptr<facebook::scout::Scout>* _scout;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerTable:(id)arg1 valueColumns:(id)arg2 groupByColumns:(id)arg3 ;
-(void)logToTable:(id)arg1 timestamp:(long long)arg2 rowData:(id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

