/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBSearchFilterTypeSpecificProps, FBSearchFilterValue;

@interface FBSearchFilter : FBValueObject <NSCopying> {

	BOOL _disabled;
	NSString* _name;
	NSString* _title;
	NSString* _icon;
	unsigned long long _type;
	FBSearchFilterTypeSpecificProps* _typeSpecificProps;
	FBSearchFilterValue* _value;

}

@property (nonatomic,copy,readonly) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * icon;                                                  //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) FBSearchFilterTypeSpecificProps * typeSpecificProps;              //@synthesize typeSpecificProps=_typeSpecificProps - In the implementation block
@property (nonatomic,readonly) BOOL disabled;                                                         //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,copy,readonly) FBSearchFilterValue * value;                                      //@synthesize value=_value - In the implementation block
-(id)choiceValues;
-(id)defaultOrCurrentValueTitle;
-(id)toggleValue;
-(id)customPageValueDescriptor;
-(BOOL)isCustomValueSelected;
-(FBSearchFilterTypeSpecificProps *)typeSpecificProps;
-(id)filterWithUpdatedValue:(id)arg1 ;
-(id)analyticsFriendlyRepresentation;
-(id)initWithName:(id)arg1 title:(id)arg2 icon:(id)arg3 type:(unsigned long long)arg4 typeSpecificProps:(id)arg5 disabled:(BOOL)arg6 value:(id)arg7 ;
-(NSString *)name;
-(NSString *)title;
-(unsigned long long)type;
-(FBSearchFilterValue *)value;
-(BOOL)disabled;
-(NSString *)icon;
@end

