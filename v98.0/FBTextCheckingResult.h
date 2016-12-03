/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSDictionary, NSURL;

@interface FBTextCheckingResult : NSTextCheckingResult {

	NSRange _rangeOverride;
	unsigned long long _resultTypeOverride;
	NSDictionary* _components;
	NSURL* _URL;

}

@property (copy,readonly) NSDictionary * components;              //@synthesize components=_components - In the implementation block
@property (readonly) NSRange range; 
@property (readonly) unsigned long long resultType; 
@property (copy,readonly) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
-(id)initWithType:(unsigned long long)arg1 range:(NSRange)arg2 components:(id)arg3 URL:(id)arg4 ;
-(NSURL *)URL;
-(NSRange)range;
-(NSDictionary *)components;
-(unsigned long long)resultType;
@end
