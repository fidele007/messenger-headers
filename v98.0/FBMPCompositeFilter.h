/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMPFilter.h>
#import <Messenger/FBMPPermissiveOutput.h>

@protocol FBMPFilter;
@class NSString;

@interface FBMPCompositeFilter : NSObject <FBMPFilter, FBMPPermissiveOutput> {

	id<FBMPFilter> _innerFilter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithFilter:(id)arg1 ;
-(id)initWithFilter:(id)arg1 ;
-(id)consumerPorts;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(id)producerPorts;
-(BOOL)allowsConnectionsWithConsumerPortMapping:(id)arg1 ;
@end

