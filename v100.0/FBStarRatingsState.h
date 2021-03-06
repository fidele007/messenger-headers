/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

