/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBUserLeadGenField : FBGraphQLInput {

	NSString* _fieldKey;
	NSArray* _values;

}

@property (nonatomic,copy) NSString * fieldKey;              //@synthesize fieldKey=_fieldKey - In the implementation block
@property (nonatomic,copy) NSArray * values;                 //@synthesize values=_values - In the implementation block
-(void)setFieldKey:(NSString *)arg1 ;
-(NSString *)fieldKey;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
@end

