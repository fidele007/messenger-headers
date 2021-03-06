/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemDatePickerFormField, NSDate;

@interface FBPageComponentFlowDatePickerWithTargetDateModel : FBValueObject <NSCopying> {

	FBMemDatePickerFormField* _formField;
	NSDate* _targetDate;

}

@property (nonatomic,copy,readonly) FBMemDatePickerFormField * formField;              //@synthesize formField=_formField - In the implementation block
@property (nonatomic,copy,readonly) NSDate * targetDate;                               //@synthesize targetDate=_targetDate - In the implementation block
-(FBMemDatePickerFormField *)formField;
-(id)initWithFormField:(id)arg1 targetDate:(id)arg2 ;
-(NSDate *)targetDate;
@end

