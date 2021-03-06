/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBStarRatingsState : NSObject <NSCoding, NSCopying> {

	unsigned long long _completionState;
	unsigned long long _completionTime;

}

@property (nonatomic,readonly) unsigned long long completionState;              //@synthesize completionState=_completionState - In the implementation block
@property (nonatomic,readonly) unsigned long long completionTime;               //@synthesize completionTime=_completionTime - In the implementation block
-(unsigned long long)completionTime;
-(unsigned long long)completionState;
-(void)setTimeAndSetCompletionState:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

