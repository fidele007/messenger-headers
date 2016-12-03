/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBMemPhoto, NSString, NSNumber, NSDate;


@protocol FBMediaContainerProtocol <NSObject>
@property (nonatomic,readonly) FBMemPhoto * mediaContainerCoverPhoto; 
@property (nonatomic,copy,readonly) NSString * mediaContainerName; 
@property (nonatomic,copy,readonly) NSNumber * size; 
@property (nonatomic,readonly) NSDate * modifiedTime; 
@property (nonatomic,copy,readonly) NSNumber * canViewerEdit; 
@property (nonatomic,copy,readonly) NSString * graphQLID; 
@required
-(NSString *)graphQLID;
-(NSDate *)modifiedTime;
-(NSNumber *)canViewerEdit;
-(FBMemPhoto *)mediaContainerCoverPhoto;
-(id)titleForContainerForSession:(id)arg1;
-(id)coverPhotoForContainerForSession:(id)arg1;
-(NSString *)mediaContainerName;
-(NSNumber *)size;

@end

