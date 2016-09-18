/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
