/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAutoupdaterPreparer.h>

@class NSArray, NSString;

@interface FBAutoupdaterCompositePreparer : NSObject <FBAutoupdaterPreparer> {

	NSArray* _preparers;

}

@property (nonatomic,copy) NSArray * preparers;                     //@synthesize preparers=_preparers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)prepareUpdate:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(id)initWithPreparers:(id)arg1 ;
-(NSArray *)preparers;
-(void)setPreparers:(NSArray *)arg1 ;
@end
