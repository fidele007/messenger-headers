/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNMAISuggestionsFeedbackCellViewModel : FBValueObject <NSCoding, NSCopying> {

	NSString* _title;
	long long _actionType;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long actionType;               //@synthesize actionType=_actionType - In the implementation block
-(id)initWithTitle:(id)arg1 actionType:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)title;
-(long long)actionType;
@end

