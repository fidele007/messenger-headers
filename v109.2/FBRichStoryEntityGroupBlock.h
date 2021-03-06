/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRichStoryBlock.h>

@class NSArray;

@interface FBRichStoryEntityGroupBlock : FBRichStoryBlock {

	NSArray* _entityBlocks;
	long long _type;

}

@property (nonatomic,copy,readonly) NSArray * entityBlocks;              //@synthesize entityBlocks=_entityBlocks - In the implementation block
@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
-(id)initWithType:(long long)arg1 entityBlocks:(id)arg2 blockID:(id)arg3 annotations:(id)arg4 ;
-(NSArray *)entityBlocks;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

