/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBDialogsParams.h>

@class NSArray;

@interface FBPhotoParams : FBDialogsParams {

	BOOL _dataFailuresFatal;
	NSArray* _friends;
	id _place;
	NSArray* _photos;

}

@property (nonatomic,copy) NSArray * friends;                     //@synthesize friends=_friends - In the implementation block
@property (nonatomic,copy) id place;                              //@synthesize place=_place - In the implementation block
@property (assign,nonatomic) BOOL dataFailuresFatal;              //@synthesize dataFailuresFatal=_dataFailuresFatal - In the implementation block
@property (nonatomic,copy) NSArray * photos;                      //@synthesize photos=_photos - In the implementation block
+(id)methodName;
-(id)dictionaryMethodArgs;
-(BOOL)dataFailuresFatal;
-(void)setDataFailuresFatal:(BOOL)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)validate;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSArray *)photos;
-(id)place;
-(void)setPlace:(id)arg1 ;
-(void)setFriends:(NSArray *)arg1 ;
-(id)initWithPhotos:(id)arg1 ;
-(NSArray *)friends;
@end

