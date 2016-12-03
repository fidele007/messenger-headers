/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDataDeserializing.h>

@class NSSet;

@interface FBJSONResponseDeserializer : NSObject <FBDataDeserializing> {

	NSSet* _expectedTypes;

}
+(id)setForExpectedTypeEnum:(long long)arg1 ;
-(id)initWithExpectedTypes:(long long)arg1 ;
-(id)_parseJSONDataFragment:(id)arg1 error:(id*)arg2 ;
-(void)deserialize:(id)arg1 responseProcessor:(id)arg2 completionCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 ;
-(id)description;
@end
