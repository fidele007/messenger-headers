/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMPCompositeFilter.h>

@class NSArray;

@interface FBMPDecoratorFilter : FBMPCompositeFilter {

	NSArray* _extraConsumerPorts;
	BOOL _required;

}
+(id)newWithFilter:(id)arg1 extraConsumerPorts:(id)arg2 required:(BOOL)arg3 ;
-(id)consumerPorts;
-(BOOL)allowsConnectionsWithConsumerPortMapping:(id)arg1 ;
@end

