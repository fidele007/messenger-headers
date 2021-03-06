/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBContactUploadBatch : FBGraphQLInput

@property (nonatomic,copy) NSString * recordId; 
@property (nonatomic,copy) NSString * modifier; 
@property (nonatomic,copy) NSString * minimalHash; 
@property (nonatomic,copy) NSString * extendedHash; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSArray * phones; 
@property (nonatomic,copy) NSArray * emails; 
+(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
@end

