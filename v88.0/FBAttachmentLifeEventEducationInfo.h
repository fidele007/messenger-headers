/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class FBDateInput, NSString;

@interface FBAttachmentLifeEventEducationInfo : FBGraphQLInput {

	FBDateInput* _endDate;
	NSString* _graduated;
	NSString* _schoolType;
	NSString* _schoolId;

}

@property (nonatomic,copy) FBDateInput * endDate;              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSString * graduated;               //@synthesize graduated=_graduated - In the implementation block
@property (nonatomic,copy) NSString * schoolType;              //@synthesize schoolType=_schoolType - In the implementation block
@property (nonatomic,copy) NSString * schoolId;                //@synthesize schoolId=_schoolId - In the implementation block
-(NSString *)schoolType;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)graduated;
-(void)setGraduated:(NSString *)arg1 ;
-(void)setSchoolType:(NSString *)arg1 ;
-(NSString *)schoolId;
-(void)setSchoolId:(NSString *)arg1 ;
-(void)setEndDate:(FBDateInput *)arg1 ;
-(FBDateInput *)endDate;
@end

