/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface MNInstructionsViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _explanation;
	NSArray* _instructionSteps;

}

@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * explanation;                  //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,copy,readonly) NSArray * instructionSteps;              //@synthesize instructionSteps=_instructionSteps - In the implementation block
-(NSArray *)instructionSteps;
-(id)initWithTitle:(id)arg1 explanation:(id)arg2 instructionSteps:(id)arg3 ;
-(NSString *)title;
-(NSString *)explanation;
@end

