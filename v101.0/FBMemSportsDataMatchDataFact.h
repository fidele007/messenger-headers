/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWildeMemModelObject.h>
#import <Messenger/FBFeedbackTargetProtocol.h>
#import <Messenger/FBShareable.h>
#import <Messenger/FBQueriedEntityFieldsProtocol.h>
#import <Messenger/FBQueriedNodeFieldsProtocol.h>

@class NSString;

@interface FBMemSportsDataMatchDataFact : FBWildeMemModelObject <FBFeedbackTargetProtocol, FBShareable, FBQueriedEntityFieldsProtocol, FBQueriedNodeFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)shareableID;
-(id)shareableURL;
-(void)taggableSourceAvatarWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)shareableType;
-(id)shareableText;
-(id)shareableTitle;
-(id)shareableSubtitle;
-(id)shareableDescription;
-(id)shareableImageURL;
-(id)shareableImage;
-(id)shareableQuote;
@end

