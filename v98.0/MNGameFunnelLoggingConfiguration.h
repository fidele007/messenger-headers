/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBQuicksilverFunnelLoggingConfiguration.h>

@class NSString;

@interface MNGameFunnelLoggingConfiguration : NSObject <FBQuicksilverFunnelLoggingConfiguration> {

	NSString* _funnelName;
	NSString* _source;
	NSString* _sourceID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)funnelName;
-(id)initWithFunnelName:(id)arg1 source:(id)arg2 sourceID:(id)arg3 ;
-(id)source;
-(id)sourceID;
@end

